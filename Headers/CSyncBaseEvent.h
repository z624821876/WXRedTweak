//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NetCmdEvent.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface CSyncBaseEvent : NetCmdEvent
{
    NSString *m_nsLocalUsrName;
    unsigned int m_uiSyncOplogCount;
    NSMutableSet *m_setGetUsrImgList;
    _Bool m_bNotifyGetUsrImg;
    NSMutableArray *m_arrMsgList;
    NSMutableArray *m_arrContactList;
    NSMutableArray *m_arrChatroomContactList;
    NSMutableDictionary *m_dicChatroomMemberList;
    NSMutableDictionary *m_dicWebWxClearUnRead;
    _Bool m_bInit;
    NSMutableArray *m_arrWxAppContact;
    _Bool _m_ignoreSession;
}

- (void).cxx_destruct;
- (_Bool)AddHelloMessageToDB:(id)arg1 HelloUser:(id)arg2 MsgWrap:(id)arg3 Des:(unsigned int)arg4 OpCode:(unsigned int)arg5 GetChangeDisplay:(_Bool *)arg6;
- (_Bool)AddHelloMsg:(id)arg1 HelloUser:(id)arg2 ChatName:(id)arg3 Des:(unsigned int)arg4 OpCode:(unsigned int)arg5 DBRet:(_Bool *)arg6 GetChangeDisplay:(_Bool *)arg7;
- (void)AddSpecialMsg:(id)arg1 ChatName:(id)arg2 MsgWrap:(id)arg3;
- (_Bool)BatchAddMsg:(_Bool)arg1 ShowPush:(_Bool)arg2;
- (void)BatchModChatroomMember;
- (void)BatchModContact;
- (_Bool)HandleBatch:(_Bool)arg1 ShowPush:(_Bool)arg2;
- (_Bool)HandleHelloMsg:(id)arg1 SpcialSession:(id)arg2 NotAddDBSession:(id)arg3 GetChangeDisplay:(_Bool *)arg4;
- (void)ModChatRoomNotify:(id)arg1 Status:(unsigned int)arg2;
- (void)NotifyArrayMessage:(id)arg1 Message:(unsigned int)arg2;
- (void)NotifyFromPrtl:(unsigned int)arg1 MessageInfo:(id)arg2;
- (void)NotifyMessage:(id)arg1 Message:(unsigned int)arg2;
- (void)NotifySessionMessage:(id)arg1 Message:(unsigned int)arg2;
- (id)ParseMsgClusterType:(id)arg1;
- (void)ParseStatusNotify:(id)arg1 map:(id)arg2;
- (void)QuitChatRoom:(id)arg1 UsrName:(id)arg2;
- (id)StatusNotifyWebWxClearUnRead:(struct XmlReaderNode_t *)arg1 msg:(id)arg2;
- (void)Stop;
- (id)init;
@property(nonatomic) _Bool m_ignoreSession; // @synthesize m_ignoreSession=_m_ignoreSession;
@property(retain, nonatomic) NSString *m_nsLocalUsrName; // @synthesize m_nsLocalUsrName;
@property(retain, nonatomic) NSMutableSet *m_setGetUsrImgList; // @synthesize m_setGetUsrImgList;
- (_Bool)processSpecialMessage:(id)arg1;

@end
