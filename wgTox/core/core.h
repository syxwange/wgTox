

#ifndef CORE_HPP
#define CORE_HPP

#include "toxfile.h"
#include "toxid.h"

#include "strongtype.h"
#include <tox/tox.h>

#include <QMutex>
#include <QObject>
#include <QThread>
#include <QTimer>

#include <functional>
#include <memory>

class CoreAV;
class ICoreSettings;
class GroupInvite;
class Profile;



///�Լ��޸ĵģ���Ϊtox�汾��ͬ�ˣ���Ȼ�����

enum class Status
{
    Online = 0,
    Away,
    Busy,
    Offline
};

class Core;

using ToxCorePtr = std::unique_ptr<Core>;
using ReceiptNum = NamedType<uint32_t, struct ReceiptNumTag>;
Q_DECLARE_METATYPE(ReceiptNum);

class Core : public QObject
{
    Q_OBJECT
public:
    enum class ToxCoreErrors
    {
        BAD_PROXY,
        INVALID_SAVE,
        FAILED_TO_START,
        ERROR_ALLOC
    };

    static ToxCorePtr makeToxCore(const QByteArray& savedata, const ICoreSettings* const settings,
                                  ToxCoreErrors* err = nullptr);
    static Core* getInstance();
    const CoreAV* getAv() const;
    CoreAV* getAv();
    ~Core();

    static const QString TOX_EXT;
    static QStringList splitMessage(const QString& message, int maxLen);

    QString getPeerName(const ToxPk& id) const;

    QVector<uint32_t> getFriendList() const;
    uint32_t getGroupNumberPeers(int groupId) const;
    QString getGroupPeerName(int groupId, int peerId) const;
    ToxPk getGroupPeerPk(int groupId, int peerId) const;
    QStringList getGroupPeerNames(int groupId) const;
    bool getGroupAvEnabled(int groupId) const;
    ToxPk getFriendPublicKey(uint32_t friendNumber) const;
    QString getFriendUsername(uint32_t friendNumber) const;

    bool isFriendOnline(uint32_t friendId) const;
    bool hasFriendWithPublicKey(const ToxPk& publicKey) const;
    uint32_t joinGroupchat(const GroupInvite& inviteInfo) const;
    void quitGroupChat(int groupId) const;

    QString getUsername() const;
    Status getStatus() const;
    QString getStatusMessage() const;
    ToxId getSelfId() const;
    ToxPk getSelfPublicKey() const;
    QPair<QByteArray, QByteArray> getKeypair() const;

    bool isReady() const;

    void sendFile(uint32_t friendId, QString filename, QString filePath, long long filesize);

public slots:
    void start();

    QByteArray getToxSaveData();

    void acceptFriendRequest(const ToxPk& friendPk);
    void requestFriendship(const ToxId& friendAddress, const QString& message);
    void groupInviteFriend(uint32_t friendId, int groupId);
	int createGroup(uint8_t type = 1);// TOX_CONFERENCE_TYPE_AV);û�з������ö��

    void removeFriend(uint32_t friendId, bool fake = false);
    void removeGroup(int groupId, bool fake = false);

    void setStatus(Status status);
    void setUsername(const QString& username);
    void setStatusMessage(const QString& message);

    bool sendMessage(uint32_t friendId, const QString& message, ReceiptNum& receipt);
    void sendGroupMessage(int groupId, const QString& message);
    void sendGroupAction(int groupId, const QString& message);
    void changeGroupTitle(int groupId, const QString& title);
    bool sendAction(uint32_t friendId, const QString& action, ReceiptNum& receipt);
    void sendTyping(uint32_t friendId, bool typing);

    void sendAvatarFile(uint32_t friendId, const QByteArray& data);
    void cancelFileSend(uint32_t friendId, uint32_t fileNum);
    void cancelFileRecv(uint32_t friendId, uint32_t fileNum);
    void rejectFileRecvRequest(uint32_t friendId, uint32_t fileNum);
    void acceptFileRecvRequest(uint32_t friendId, uint32_t fileNum, QString path);
    void pauseResumeFile(uint32_t friendId, uint32_t fileNum);

    void setNospam(uint32_t nospam);

signals:
    void connected();
    void disconnected();

    void friendRequestReceived(const ToxPk& friendPk, const QString& message);
    void friendAvatarChanged(const ToxPk& friendPk, const QByteArray& pic);
    void friendAvatarRemoved(const ToxPk& friendPk);

    void requestSent(const ToxPk& friendPk, const QString& message);
    void failedToAddFriend(const ToxPk& friendPk, const QString& errorInfo = QString());

    void usernameSet(const QString& username);
    void statusMessageSet(const QString& message);
    void statusSet(Status status);
    void idSet(const ToxId& id);

    void failedToSetUsername(const QString& username);
    void failedToSetStatusMessage(const QString& message);
    void failedToSetStatus(Status status);
    void failedToSetTyping(bool typing);

    void avReady();

    void fileSendStarted(ToxFile file);
    void fileReceiveRequested(ToxFile file);
    void fileTransferAccepted(ToxFile file);
    void fileTransferCancelled(ToxFile file);
    void fileTransferFinished(ToxFile file);
    void fileUploadFinished(const QString& path);
    void fileDownloadFinished(const QString& path);
    void fileTransferPaused(ToxFile file);
    void fileTransferInfo(ToxFile file);
    void fileTransferRemotePausedUnpaused(ToxFile file, bool paused);
    void fileTransferBrokenUnbroken(ToxFile file, bool broken);
    void fileNameChanged(const ToxPk& friendPk);

    void saveRequest();

    /**
     * @deprecated prefer signals using ToxPk
     */

    void fileAvatarOfferReceived(uint32_t friendId, uint32_t fileId, const QByteArray& avatarHash);

    void friendMessageReceived(uint32_t friendId, const QString& message, bool isAction);
    void friendAdded(uint32_t friendId, const ToxPk& friendPk);

    void friendStatusChanged(uint32_t friendId, Status status);
    void friendStatusMessageChanged(uint32_t friendId, const QString& message);
    void friendUsernameChanged(uint32_t friendId, const QString& username);
    void friendTypingChanged(uint32_t friendId, bool isTyping);

    void friendRemoved(uint32_t friendId);
    void friendLastSeenChanged(uint32_t friendId, const QDateTime& dateTime);

    void emptyGroupCreated(int groupnumber, const QString& title = QString());
    void groupInviteReceived(const GroupInvite& inviteInfo);
    void groupMessageReceived(int groupnumber, int peernumber, const QString& message, bool isAction);
    void groupNamelistChanged(int groupnumber, int peernumber, uint8_t change);
    void groupPeerlistChanged(int groupnumber);
    void groupPeerNameChanged(int groupnumber, int peernumber, const QString& newName);
    void groupTitleChanged(int groupnumber, const QString& author, const QString& title);
    void groupPeerAudioPlaying(int groupnumber, ToxPk peerPk);
    void groupSentFailed(int groupId);
    void actionSentResult(uint32_t friendId, const QString& action, int success);

    void receiptRecieved(int friedId, ReceiptNum receipt);

    void failedToRemoveFriend(uint32_t friendId);

    void fileSendFailed(uint32_t friendId, const QString& fname);

private:
    Core(QThread* coreThread);

    static void onFriendRequest(Tox* tox, const uint8_t* cUserId, const uint8_t* cMessage,
                                size_t cMessageSize, void* core);
    static void onFriendMessage(Tox* tox, uint32_t friendId, TOX_MESSAGE_TYPE type,const uint8_t* cMessage, size_t cMessageSize, void* core);
    static void onFriendNameChange(Tox* tox, uint32_t friendId, const uint8_t* cName,size_t cNameSize, void* core);
    static void onFriendTypingChange(Tox* tox, uint32_t friendId, bool isTyping, void* core);
    static void onStatusMessageChanged(Tox* tox, uint32_t friendId, const uint8_t* cMessage,size_t cMessageSize, void* core);
    static void onUserStatusChanged(Tox* tox, uint32_t friendId, TOX_USER_STATUS userstatus,void* core);
    static void onConnectionStatusChanged(Tox* tox, uint32_t friendId, TOX_CONNECTION status, void* core);

    static void onGroupMessage(Tox* tox, uint32_t groupId, uint32_t peerId, TOX_MESSAGE_TYPE type,
                               const uint8_t* cMessage, size_t length, void* vCore);
    static void onGroupPeerListChange(Tox*, uint32_t groupId, void* core);
    static void onGroupPeerNameChange(Tox*, uint32_t groupId, uint32_t peerId, const uint8_t* name,
                                      size_t length, void* core);
    static void onGroupTitleChange(Tox* tox, uint32_t groupId, uint32_t peerId,
                                   const uint8_t* cTitle, size_t length, void* vCore);
    static void onReadReceiptCallback(Tox* tox, uint32_t friendId, uint32_t receipt, void* core);

    void sendGroupMessageWithType(int groupId, const QString& message, TOX_MESSAGE_TYPE type);
    bool sendMessageWithType(uint32_t friendId, const QString& message, TOX_MESSAGE_TYPE type, ReceiptNum& receipt);



    bool checkConnection();

    void checkEncryptedHistory();
    void makeTox(QByteArray savedata, ICoreSettings* s);
    void makeAv();
    void loadFriends();
    void loadGroups();
    void bootstrapDht();

    void checkLastOnline(uint32_t friendId);

    QString getFriendRequestErrorMessage(const ToxId& friendId, const QString& message) const;
    static void registerCallbacks(Tox* tox);

private slots:
    void process();
    void onStarted();

private:
    struct ToxDeleter
    {
        void operator()(Tox* tox)
        {
            tox_kill(tox);
        }
    };

    using ToxPtr = std::unique_ptr<Tox, ToxDeleter>;
    ToxPtr tox;

    std::unique_ptr<CoreAV> av;
    QTimer* toxTimer = nullptr;
    // recursive, since we might call our own functions
    // pointer so we can circumvent const functions
    std::unique_ptr<QMutex> coreLoopLock = nullptr;

    std::unique_ptr<QThread> coreThread = nullptr;

    friend class Audio;    ///< Audio can access our calls directly to reduce latency
    friend class CoreFile; ///< CoreFile can access tox* and emit our signals
    friend class CoreAV;   ///< CoreAV accesses our toxav* for now
};

#endif // CORE_HPP