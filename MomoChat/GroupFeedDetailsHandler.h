//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FeedDetailsHandler.h"

@interface GroupFeedDetailsHandler : FeedDetailsHandler
{
}

- (id)getLikeCellPlaceholder;
- (id)getCurrentFeed:(id)arg1;
- (void)appendComment:(id)arg1 andFeed:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)configureBasicCells;
- (void)reloadNewFeed:(id)arg1;
- (id)cellWithIdentifier:(id)arg1 tableView:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;

@end

