//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonMessageCellView.h"

#import "IMsgExt-Protocol.h"
#import "IMsgRevokeExt-Protocol.h"
#import "ISightExt-Protocol.h"
#import "IVOIPUILogicMgrExt-Protocol.h"
#import "IVideoExt-Protocol.h"
#import "IWXVideoPlayerViewExt-Protocol.h"
#import "SightViewDelegate-Protocol.h"

@class NSString, ShortVideoMessageViewModel, SightView, StrokeView, UIView, YYAsyncImageView;

__attribute__((visibility("hidden")))
@interface ShortVideoMessageCellView : CommonMessageCellView <IVideoExt, IWXVideoPlayerViewExt, IVOIPUILogicMgrExt, IMsgExt, IMsgRevokeExt, SightViewDelegate, ISightExt>
{
    UIView *m_bgMaskView;
    YYAsyncImageView *m_thumbImgView;
    SightView *m_playerView;
    StrokeView *m_strokeView;
    _Bool m_isLoading;
    _Bool m_isClickDownload;
    unsigned long long m_sightLegalityType;
    _Bool m_mayBeIllegalAD;
    _Bool m_isVideoExpired;
}

- (void).cxx_destruct;
- (void)notifySuperViewToRefresh;
- (void)updateUIAfterThumbImageDidReGenerate;
- (_Bool)generateThumbImage;
- (void)setThumbImage:(id)arg1;
- (void)stopPlaying;
- (void)startPlaying;
- (void)onWXVideoPlayerViewPlay:(id)arg1;
- (void)onResumeSightView:(id)arg1;
- (void)onStackSightView:(id)arg1;
- (_Bool)sightView:(id)arg1 playbackDidReadEnd:(_Bool)arg2;
- (void)sightViewProgressDidReachEnd:(id)arg1;
- (void)UpdateSightVideoDownloadMsg:(id)arg1;
- (void)OnSightThumbDidChange:(id)arg1;
- (void)OnSightThumbDownloadFailed:(id)arg1;
- (void)OnSightThumbDownloadOK:(id)arg1;
- (void)handleDownloadFail;
- (void)setProgress:(unsigned int)arg1;
- (void)UpdateVideoMsg:(id)arg1;
- (void)OnVideoGetIntoUploadQueue:(id)arg1;
- (void)OnUpdateVideoStatus:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadVideoExpiredFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2 SysMsg:(id)arg3;
- (void)onClick;
- (void)onTouchUpInside;
- (void)onFavorite:(id)arg1;
- (void)onForward:(id)arg1;
- (id)operationMenuItems;
- (void)checkLegalityWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)shouldAutoPlay;
- (_Bool)canAutoPlaySettingFromServer;
- (_Bool)shouldAutoDownloadDefault;
- (_Bool)shouldAutoDownloadForExp;
- (_Bool)isInFlowControl;
- (_Bool)isSendFailed;
- (id)makeRecieverPath:(double)arg1;
- (id)makeRecieverMaskLayer;
- (id)makeSenderPath:(double)arg1;
- (id)makeSenderMaskLayer;
- (void)initPlayerView;
- (void)initThumbImgView;
- (void)initBgMaskView;
- (struct CGRect)showRectForMenuController;
- (id)displayViewForImageBrowser;
- (void)layoutContentView;
- (void)onDisappear;
- (void)onAppear;
- (_Bool)canBeReused;
- (void)setViewModel:(id)arg1;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) ShortVideoMessageViewModel *viewModel; // @dynamic viewModel;

@end

