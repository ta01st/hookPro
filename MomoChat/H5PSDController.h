//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PSDExpandoProtocol.h"
#import "PSDPluginProtocol.h"
#import "PSDViewControllerProtocol.h"
#import "UIWebViewDelegate.h"

@class H5Alert, H5ExternNativeApiManager, H5MenuControl, H5NavigatorTitleView, H5Options, H5PopoverMenuControl, H5WebView, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSURL, NSURLRequest, PSDScene, PSDView, UIButton, UIColor, UIImageView, UILabel, UIView, UIWebView;

@interface H5PSDController : UIViewController <UIWebViewDelegate, PSDViewControllerProtocol, PSDPluginProtocol, PSDExpandoProtocol>
{
    NSString *_fontScale;
    float keyboardHeight;
    _Bool _pullRefreshing;
    _Bool _optionMenuVisible;
    _Bool _gestureBack;
    _Bool _webPageLoadSuccess;
    _Bool _isBackProcessed;
    _Bool _isInit;
    _Bool _isWebViewInit;
    _Bool _viewIsReady;
    _Bool _hideLeftButtonsByJs;
    _Bool _isToolbarInNavi;
    _Bool _isDefaultOptionMenu;
    _Bool _checkHistoryLength;
    int _failureNumber;
    id <H5ServiceDelegate> _serviceDelegate;
    PSDView *_contentView;
    PSDScene *_scene;
    id <PSDViewControllerDelegate> _delegate;
    UIWebView *_webView;
    H5WebView *_h5WebView;
    H5MenuControl *_toolbar;
    H5PopoverMenuControl *_popoverToolbar;
    UIButton *_titleRightItem;
    UIButton *_backLeftItem;
    UIButton *_closeLeftItem;
    UIView *_statesView;
    double _titlebarHeight;
    double _toolbarHeight;
    NSString *_subtitle;
    NSString *_maintitle;
    H5NavigatorTitleView *_navigetorTitleView;
    H5Alert *_h5Alert;
    NSString *_interceptUrl;
    NSDictionary *_appConfig;
    H5Options *_options;
    NSURL *_url;
    UIColor *_naviTitleColor;
    long long _statusBarStyle;
    NSString *_htmlZoomValue;
    NSURLRequest *_lastMainRequest;
    UILabel *_webviewDomainLabel;
    NSMutableArray *_delayExecList;
    H5ExternNativeApiManager *_externNativeApiManager;
    NSDate *_startLoadTime;
    long long _instanceId;
    UIImageView *_redDotImageView4RightBarItem;
    NSMutableDictionary *_codeSnippets;
    NSString *_rootBackText;
}

+ (id)findFirstResponder:(id)arg1;
+ (void)initialize;
+ (id)contentWithFileName:(id)arg1;
@property(nonatomic) _Bool checkHistoryLength; // @synthesize checkHistoryLength=_checkHistoryLength;
@property(retain, nonatomic) NSString *rootBackText; // @synthesize rootBackText=_rootBackText;
@property(nonatomic) _Bool isDefaultOptionMenu; // @synthesize isDefaultOptionMenu=_isDefaultOptionMenu;
@property(retain, nonatomic) NSMutableDictionary *codeSnippets; // @synthesize codeSnippets=_codeSnippets;
@property(retain, nonatomic) UIImageView *redDotImageView4RightBarItem; // @synthesize redDotImageView4RightBarItem=_redDotImageView4RightBarItem;
@property(nonatomic) _Bool isToolbarInNavi; // @synthesize isToolbarInNavi=_isToolbarInNavi;
@property(nonatomic) long long instanceId; // @synthesize instanceId=_instanceId;
@property(retain, nonatomic) NSDate *startLoadTime; // @synthesize startLoadTime=_startLoadTime;
@property(retain, nonatomic) H5ExternNativeApiManager *externNativeApiManager; // @synthesize externNativeApiManager=_externNativeApiManager;
@property(nonatomic) _Bool hideLeftButtonsByJs; // @synthesize hideLeftButtonsByJs=_hideLeftButtonsByJs;
@property(retain, nonatomic) NSMutableArray *delayExecList; // @synthesize delayExecList=_delayExecList;
@property(nonatomic) _Bool viewIsReady; // @synthesize viewIsReady=_viewIsReady;
@property(retain, nonatomic) UILabel *webviewDomainLabel; // @synthesize webviewDomainLabel=_webviewDomainLabel;
@property(nonatomic) _Bool isWebViewInit; // @synthesize isWebViewInit=_isWebViewInit;
@property(nonatomic) _Bool isInit; // @synthesize isInit=_isInit;
@property(nonatomic) int failureNumber; // @synthesize failureNumber=_failureNumber;
@property(retain, nonatomic) NSURLRequest *lastMainRequest; // @synthesize lastMainRequest=_lastMainRequest;
@property(retain, nonatomic) NSString *htmlZoomValue; // @synthesize htmlZoomValue=_htmlZoomValue;
@property(nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(nonatomic) _Bool isBackProcessed; // @synthesize isBackProcessed=_isBackProcessed;
@property(nonatomic) _Bool webPageLoadSuccess; // @synthesize webPageLoadSuccess=_webPageLoadSuccess;
@property(retain, nonatomic) UIColor *naviTitleColor; // @synthesize naviTitleColor=_naviTitleColor;
@property(nonatomic) _Bool gestureBack; // @synthesize gestureBack=_gestureBack;
@property(nonatomic) _Bool optionMenuVisible; // @synthesize optionMenuVisible=_optionMenuVisible;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) H5Options *options; // @synthesize options=_options;
@property(retain, nonatomic) NSDictionary *appConfig; // @synthesize appConfig=_appConfig;
@property(retain, nonatomic) NSString *interceptUrl; // @synthesize interceptUrl=_interceptUrl;
@property(retain, nonatomic) H5Alert *h5Alert; // @synthesize h5Alert=_h5Alert;
@property(retain, nonatomic) H5NavigatorTitleView *navigetorTitleView; // @synthesize navigetorTitleView=_navigetorTitleView;
@property(copy, nonatomic) NSString *maintitle; // @synthesize maintitle=_maintitle;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(nonatomic) double toolbarHeight; // @synthesize toolbarHeight=_toolbarHeight;
@property(nonatomic) double titlebarHeight; // @synthesize titlebarHeight=_titlebarHeight;
@property(retain, nonatomic) UIView *statesView; // @synthesize statesView=_statesView;
@property(retain, nonatomic) UIButton *closeLeftItem; // @synthesize closeLeftItem=_closeLeftItem;
@property(retain, nonatomic) UIButton *backLeftItem; // @synthesize backLeftItem=_backLeftItem;
@property(retain, nonatomic) UIButton *titleRightItem; // @synthesize titleRightItem=_titleRightItem;
@property(retain, nonatomic) H5PopoverMenuControl *popoverToolbar; // @synthesize popoverToolbar=_popoverToolbar;
@property(retain, nonatomic) H5MenuControl *toolbar; // @synthesize toolbar=_toolbar;
@property(retain, nonatomic) H5WebView *h5WebView; // @synthesize h5WebView=_h5WebView;
@property(nonatomic) __weak UIWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) __weak id <PSDViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak PSDScene *scene; // @synthesize scene=_scene;
@property(retain, nonatomic) PSDView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <H5ServiceDelegate> serviceDelegate; // @synthesize serviceDelegate=_serviceDelegate;
- (void).cxx_destruct;
- (void)h5NumKeyboardTextInputEvent:(id)arg1;
- (void)deleteExpando:(id)arg1;
- (id)getExpando:(id)arg1;
- (void)setExpando:(id)arg1 withValue:(id)arg2;
- (void)handleEvent:(id)arg1;
- (void)injectJsRelyOnAlipayJsBridge;
- (void)injectIndenpendenceJs;
- (id)codeSnippets4InsertAlipayJsBridgeFile;
- (void)startFirstLoadRequest:(id)arg1;
- (id)startupParamsJs;
@property(readonly, nonatomic) NSString *name;
- (void)updateToolbar;
- (void)initUI:(id)arg1 delegate:(id)arg2;
- (void)associateWeakScene:(id)arg1 sceneParam:(id)arg2;
- (void)setTitle:(id)arg1 subTitle:(id)arg2;
- (void)popToWindowOfIndex:(int)arg1;
- (id)session;
- (void)showOptionMenu;
- (void)setOptionMenuRedDot:(int)arg1;
- (void)setOptionMenu:(id)arg1 iconUrl:(id)arg2;
- (void)layoutOptionMenuRedDot;
- (void)setRightItemImage:(id)arg1;
- (void)setRightItemText:(id)arg1;
- (void)onSettingsButtonClick;
- (void)onCloseButtonClick;
- (void)onBackButtonClick;
- (void)setupLeftItems;
- (void)setupRightItems;
- (void)hideLeftButtons;
- (void)hideOptionMenu;
- (void)showRightItem;
- (void)hideRightItem;
- (void)updateLeftItem;
- (void)updateRightItem;
- (void)appDidBecomeActive;
- (void)appWillResignActive;
- (void)didReceiveMemoryWarning;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (id)currentUrl;
- (void)registerHandler:(id)arg1 isExtern:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;
- (void)registerHandler:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)callHandler:(id)arg1 data:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;
- (void)send:(id)arg1 responseCallback:(CDUnknownBlockType)arg2;
- (void)webViewUILoaded;
- (void)clearWebView;
- (void)clearAndBack;
- (void)doBack:(id)arg1;
- (void)back;
- (void)notifyViewDidLoadEvent;
- (void)popToViewController:(id)arg1 animated:(_Bool)arg2;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)viewDidLoad;
- (void)loadView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)execDelayTasks;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)changeFontSizeByJS:(id)arg1;
- (void)reloadWebview;
- (void)pageInnerGoforward;
- (void)pageInnerGoback;
- (void)showCloseButtonItemIfNeed;
@property(nonatomic) NSString *fontScale;
- (void)hideLoading;
- (void)showLoading;
- (void)copyLink;
- (void)changeWebViewFont;
- (void)showToolbar;
- (void)hideToolbar;
- (void)onPopoverMenuClick;
- (void)onMenuClick;
- (void)addToolbarMenuItems:(id)arg1;
- (void)setToolbarMenuItems:(id)arg1;
- (void)createPopoverToolbar;
- (void)createToolBar;
- (void)updateBackButtonTitle;
- (id)currentBackText;
- (void)decideRootBackText;
- (void)hideTitlebar;
- (void)showTitlebar;
- (void)adjustWebviewContentInsets;
- (void)setWebViewFrame:(struct CGRect)arg1;
- (void)resetWebviewDomainLabelText:(id)arg1;
- (void)createWebviewDomainLabel;
- (void)hideStatusbar;
- (void)showStatusbar;
- (void)createStatusBar;
- (void)createRefreshHeaderView;
- (void)onSubtitleTouchUpInside:(id)arg1;
- (void)onTitleTouchUpInside:(id)arg1;
- (void)createTitleView;
- (void)loadJs:(id)arg1;
- (id)parseUrlParams:(id)arg1;
- (id)mergeURLParamsToOptions:(id)arg1;
- (void)dealloc;
- (id)getWebViewForExtern;
- (void)callExternNativeApi:(id)arg1;
- (void)setupUA:(id)arg1 shouldreset:(_Bool)arg2;
- (void)removeAllNotifications;
- (void)addAllNotifications;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

