//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, TMSearchNavHot;

@protocol KeyWordTagsViewDelegate <NSObject>
- (void)clickPhotoSearchBtn;
- (void)inputViewTag:(TMSearchNavHot *)arg1 deletedWithIsLastTag:(_Bool)arg2;
- (void)launchInputViewControllerWithKeyword:(NSString *)arg1 selectKeyWord:(NSString *)arg2 selectdRange:(struct _NSRange)arg3;
- (void)launchInputViewControllerWithKeyword:(NSString *)arg1;
@end

