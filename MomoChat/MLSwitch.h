//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView;

@interface MLSwitch : UIView
{
    _Bool _enable;
    _Bool _lock;
    id <MLSwitchDelegage> _delegate;
    UIImageView *_slideView;
}

@property(nonatomic) _Bool lock; // @synthesize lock=_lock;
@property(retain, nonatomic) UIImageView *slideView; // @synthesize slideView=_slideView;
@property(nonatomic) __weak id <MLSwitchDelegage> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
- (void).cxx_destruct;
- (void)touchUpInside:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

