//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBView.h"

@class FBGifImg, NSArray, NSString, UIActivityIndicatorView, UIColor, UIImage, UIImageView, UITapGestureRecognizer;

@interface FBImg : FBView
{
    UITapGestureRecognizer *_tapRecognizer;	// 8 = 0x8
    UIColor *_color;	// 16 = 0x10
    UIActivityIndicatorView *_indicatior;	// 24 = 0x18
    NSString *_filterString;	// 32 = 0x20
    NSString *_applyFilter;	// 40 = 0x28
    NSArray *_filters;	// 48 = 0x30
    NSString *_oldSrc;	// 56 = 0x38
    NSString *_srcwidth;	// 64 = 0x40
    NSString *_srcheight;	// 72 = 0x48
    FBGifImg *_gifImg;	// 80 = 0x50
    UIImageView *_imageView;	// 88 = 0x58
    NSString *_src;	// 96 = 0x60
    UIImage *_failedImage;	// 104 = 0x68
    UIImage *_defaultImage;	// 112 = 0x70
}

@property(retain, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
@property(retain, nonatomic) UIImage *failedImage; // @synthesize failedImage=_failedImage;
@property(retain, nonatomic) NSString *src; // @synthesize src=_src;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)applyFilter:(id)arg1;
- (id)makeUIImageFromCIImage:(id)arg1;
- (void)applyFilters;
- (void)onClicked:(id)arg1;
- (void)updateEvent:(id)arg1 withValue:(id)arg2;
- (id)imagePathInCaches:(id)arg1;
- (id)cachesPath;
- (id)getImageInCaches:(id)arg1;
- (void)updateImageSize;
- (void)downloadImageWithUrl:(id)arg1 Completion:(CDUnknownBlockType)arg2;
- (void)downloadWebImage:(id)arg1;
- (void)setImageMode:(id)arg1;
- (void)onLayout;
- (void)updateAttr:(id)arg1 withValue:(id)arg2;
- (void)updateCSS:(id)arg1 withValue:(id)arg2;
- (id)initWithNode:(struct fb_node *)arg1 withDocument:(id)arg2 withView:(id)arg3;

@end

