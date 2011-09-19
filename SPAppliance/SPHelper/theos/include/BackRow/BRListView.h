/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRGridView.h"

@class BRBlueGlowSelectionLozengeLayer, NSTimer, ListViewAnimationDelegate;

@interface BRListView : BRGridView {
@private
	BRBlueGlowSelectionLozengeLayer *_cursor;	// 140 = 0x8c
	ListViewAnimationDelegate *_animationDelegate;	// 144 = 0x90
	long _scrollIndex;	// 148 = 0x94
	NSTimer *_pokeTimer;	// 152 = 0x98
	NSTimer *_delayTimer;	// 156 = 0x9c
	NSTimer *_repeatTimer;	// 160 = 0xa0
	double _repeatStart;	// 164 = 0xa4
	double _repeatAccumulator;	// 172 = 0xac
	long _scrollSelection;	// 180 = 0xb4
	long _savedSelection;	// 184 = 0xb8
	BOOL _turboEngaged;	// 188 = 0xbc
	BOOL _movingDown;	// 189 = 0xbd
	BOOL _selectionEntered;	// 190 = 0xbe
}
@property(retain) id cursor;	// G=0x3166c49d; S=0x3166d725; converted property
@property(assign) BOOL lastItemCentered;	// G=0x3166c4b1; S=0x3166c4ad; converted property
- (id)init;	// 0x3166dd25
- (long)_backwardIndexForRowCount:(long)rowCount hitBoundary:(BOOL *)boundary;	// 0x3166cbb9
- (double)_calculateRepeatRate;	// 0x3166e895
- (long)_dataIndexFromGridIndex:(long)gridIndex;	// 0x3166c6dd
- (id)_dataIndexPathFromGridIndex:(long)gridIndex sectionIndex:(long *)index;	// 0x3166c79d
- (void)_ensureSelectionFocusable;	// 0x3166cc39
- (void)_enterCurrentSelection;	// 0x3166e7a5
- (long)_forwardIndexForRowCount:(long)rowCount hitBoundary:(BOOL *)boundary;	// 0x3166cb39
- (long)_gridIndexForDataIndex:(long)dataIndex;	// 0x3166c61d
- (long)_gridIndexForDataIndexPath:(id)dataIndexPath;	// 0x3166c55d
- (void)_leaveCurrentSelection;	// 0x3166e771
- (void)_listScrollingCompleted:(id)completed;	// 0x3166c899
- (void)_listScrollingInitiated:(id)initiated;	// 0x3166c8e1
- (void)_performScrollInitiationActivities;	// 0x3166c929
- (void)_performScrollTerminationActivities;	// 0x3166c51d
- (void)_pokeTimerFired:(id)fired;	// 0x3166ca29
- (void)_postSelectionFinalizedNotification;	// 0x3166c4fd
- (void)_repeatDownTimerFired:(id)fired;	// 0x3166e3c1
- (void)_repeatUpTimerFired:(id)fired;	// 0x3166e4ad
- (void)_restoreCurrentSelectionIndex;	// 0x3166c949
- (void)_saveCurrentSelectionIndex;	// 0x3166c501
- (BOOL)_scrollDown:(id)down;	// 0x3166cca5
- (BOOL)_scrollUp:(id)up;	// 0x3166cd7d
- (void)_setNewScrollIndex:(long)index;	// 0x3166cb19
- (void)_slowToStopRepeatTimerMovingDown:(BOOL)stopRepeatTimerMovingDown;	// 0x3166e599
- (void)_startDownwardAutoScroll:(id)scroll;	// 0x3166e295
- (void)_startRepeatTimerMovingDown:(BOOL)down;	// 0x3166ca65
- (void)_startUpwardAutoScroll:(id)scroll;	// 0x3166e169
- (void)_stopRepeatTimer;	// 0x3166e829
- (void)_updateScrollPosition;	// 0x3166df81
- (void)_updateWidgetFrame;	// 0x3166dea5
- (void)_updateWidgetFrameForWidget:(id)widget withItemFrame:(CGRect)itemFrame;	// 0x3166e909
- (BOOL)brEventAction:(id)action;	// 0x3166d9b9
- (void)clearSavedSelection;	// 0x3166c4b5
- (void)controlWasActivated;	// 0x3166d521
- (void)controlWasDeactivated;	// 0x3166d4c9
- (void)controlWasFocused;	// 0x3166d471
- (void)controlWasUnfocused;	// 0x3166d409
// converted property getter: - (id)cursor;	// 0x3166c49d
- (void)dealloc;	// 0x3166dc91
- (void)didFocusItemAtIndex:(long)index;	// 0x3166cfe5
- (BOOL)didPlayItemAtIndex:(long)index;	// 0x3166ce55
- (BOOL)didSelectItemAtIndex:(long)index;	// 0x3166ceb9
- (void)didUnFocusItemAtIndex:(long)index;	// 0x3166cf1d
- (float)heightForItemAtIndex:(long)index;	// 0x3166d131
- (long)indexForItemID:(id)itemID;	// 0x3166d1d5
- (id)itemAtIndex:(long)index;	// 0x3166d29d
- (id)itemIDAtIndex:(long)index;	// 0x3166d23d
// converted property getter: - (BOOL)lastItemCentered;	// 0x3166c4b1
- (void)layoutSubcontrols;	// 0x3166e04d
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x3166c4e9
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x3166c4f9
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x3166c4f5
- (void)list:(id)list didUnFocusItemAtIndexPath:(id)indexPath;	// 0x3166c4f1
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x3166c4dd
- (float)list:(id)list heightForSectionHeader:(long)sectionHeader;	// 0x3166c4d9
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x3166c4d5
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x3166c4d1
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x3166c4c1
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x3166c4c9
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x3166c4cd
- (void)list:(id)list willDisplayItemAtIndexPath:(id)indexPath;	// 0x3166c4e1
- (id)list:(id)list willFocusItemAtIndexPath:(id)indexPath;	// 0x3166c4e5
- (void)list:(id)list willUnFocusItemAtIndexPath:(id)indexPath;	// 0x3166c4ed
- (float)listHeightToMaximum:(float)maximum;	// 0x3166d5b9
- (long)numberOfColumns;	// 0x3166c4bd
- (long)numberOfItems;	// 0x3166d329
- (long)numberOfSectionsInList:(id)list;	// 0x3166c4c5
- (void)reload;	// 0x3166d8e9
- (void)selectItemAtIndex:(long)index;	// 0x3166d3dd
- (void)selectRowAtIndexPath:(id)indexPath;	// 0x3166d651
- (id)selectedIndexPath;	// 0x3166d62d
// converted property setter: - (void)setCursor:(id)cursor;	// 0x3166d725
// converted property setter: - (void)setLastItemCentered:(BOOL)centered;	// 0x3166c4ad
- (void)updateSavedSelection;	// 0x3166c4b9
- (id)visibleRowAtIndexPath:(id)indexPath;	// 0x3166d58d
- (id)visibleRowsAndRange:(NSRange *)range;	// 0x3166d579
- (void)willDisplayItemAtIndex:(long)index;	// 0x3166d0bd
- (long)willFocusItemAtIndex:(long)index;	// 0x3166d049
- (void)willUnFocusItemAtIndex:(long)index;	// 0x3166cf81
@end
