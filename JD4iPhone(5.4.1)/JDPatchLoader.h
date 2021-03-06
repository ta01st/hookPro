//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface JDPatchLoader : NSObject
{
}

+ (void)readScriptWithFileName:(id)arg1 key:(id)arg2 readBlock:(CDUnknownBlockType)arg3;
+ (void)readLocalScriptList:(CDUnknownBlockType)arg1;
+ (void)runBundleScriptWithPackageNames:(id)arg1;
+ (void)setPublicKey:(id)arg1;
+ (void)setEventBlock:(CDUnknownBlockType)arg1;
+ (void)requestRate:(double)arg1;
+ (void)runScript:(id)arg1 packageName:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
+ (void)runDownloadedScriptsByProduction:(_Bool)arg1;
+ (void)_willEnterForeground;
+ (void)_runDownloadedScriptsExclude:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
+ (void)_retryDownloadMissedScripts;
+ (void)_runDesScriptWithPath:(id)arg1 key:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
+ (void)_cleanMemScriptsRestartEngine;
+ (_Bool)_runScriptWithScript:(id)arg1 packageName:(id)arg2 version:(id)arg3;
+ (void)_startEngine;
+ (void)_storeData:(id)arg1 lerror:(id)arg2 pk:(id)arg3 finishBlock:(CDUnknownBlockType)arg4;
+ (void)_updatePackages:(id)arg1 dataVersion:(id)arg2 updateBlock:(CDUnknownBlockType)arg3;
+ (id)_clearLocalPackagesAndGetShouldDownloadPackagesWithUpdatePackages:(id)arg1;
+ (id)getPostDataWithParamsBody:(id)arg1;
+ (void)_updatePatchDataByProduction:(_Bool)arg1 finishBlock:(CDUnknownBlockType)arg2;
+ (id)_getCurrentPKPaths;
+ (id)_getPKPathsFromSetup;
+ (id)_getCurrentSetup;
+ (id)_currentVersion;
+ (void)recover;
+ (void)clearInvalid;
+ (void)checkJDPatchFloder;
+ (void)load;
+ (id)getDesKeyWithSign:(id)arg1;
+ (id)getMd5StringWithSign:(id)arg1;
+ (id)fileMD5:(id)arg1;
+ (double)p_getRequestRate;
+ (void)p_requestRate:(double)arg1;
+ (void)p_setPublicKey:(id)arg1;
+ (void)clearEventBlock;
+ (CDUnknownBlockType)p_getEventBlock;
+ (void)p_setEventBlock:(CDUnknownBlockType)arg1;

@end

