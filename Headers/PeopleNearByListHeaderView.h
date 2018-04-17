//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class UIButton, UILabel;

@interface PeopleNearByListHeaderView : MMUIView
{
    UIButton *m_chatRoomNearByBtn;
    UILabel *m_maxPeopleLabel;
    long long m_iRoomMemberCount;
    id <PeopleNearByListHeaderViewDelegate> m_delegate;
}

- (void).cxx_destruct;
- (id)init;
- (void)initChatRoomBtn;
- (id)initWithMaxNum:(long long)arg1;
@property long long m_iRoomMemberCount; // @synthesize m_iRoomMemberCount;
- (void)onChatRoomNearByBtnClicked;
- (void)setDelegate:(id)arg1;
- (void)setMaxPeopleNum:(long long)arg1;

@end
