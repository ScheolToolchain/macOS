/*
    NSCollectionViewGridLayout.h
    Application Kit
    Copyright (c) 2015-2018, Apple Inc.
    All rights reserved.
*/

#import <AppKit/NSCollectionViewLayout.h>

@class NSColor;

NS_ASSUME_NONNULL_BEGIN

/* NSCollectionView's default "Grid" layout, which matches NSCollectionView's layout behavior on OS X 10.5 through 10.10.  When you create a new NSCollectionView, its collectionViewLayout property defaults to an instance of NSCollectionViewGridLayout.
*/
NS_CLASS_AVAILABLE_MAC(10_11)
@interface NSCollectionViewGridLayout : NSCollectionViewLayout
#ifndef __OBJC2__
{
@private
    NSUInteger _maxGridRows APPKIT_IVAR;
    NSUInteger _maxGridColumns APPKIT_IVAR;
    NSSize _minItemSize APPKIT_IVAR;
    NSSize _maxItemSize APPKIT_IVAR;
    NSEdgeInsets _margins APPKIT_IVAR;
    CGFloat _minimumInteritemSpacing APPKIT_IVAR;
    CGFloat _minimumLineSpacing APPKIT_IVAR;
    NSArray *_backgroundColors APPKIT_IVAR;
    id _glReserved[22] APPKIT_IVAR;
}
#endif

#pragma mark *** Margins and Inter-Item Spacing ***

/* The amount of empty space to leave between the edges of the CollectionView's frame and the items within it.  Items will be laid out in the rectangle that remains after margins have been subtracted.  Defaults to NSEdgeInsetsZero.
*/
@property NSEdgeInsets margins;

/* For a vertically scrolling grid, this value represents the minimum spacing between items in the same row.  For a horizontally scrolling grid, this value represents the minimum spacing between items in the same column. This spacing is used to compute how many items can fit in a single line, but after the number of items is determined, the actual spacing may possibly be adjusted upward.  Defaults to 0 for a Grid layout.
*/
@property CGFloat minimumInteritemSpacing;

/* For a vertically scrolling grid, this value represents the minimum spacing between successive rows.  For a horizontally scrolling grid, this value represents the minimum spacing between successive columns.  This spacing is not applied to the space between the header and the first line or between the last line and the footer.  Defaults to 0 for a Grid layout.
*/
@property CGFloat minimumLineSpacing;


#pragma mark *** Grid Parameters ***

/* The largest number of item rows to attempt to fit in the CollectionView's visible area (if enclosed in a ScrollView).  Defaults to 0, which is interpreted to mean there should be no limit other than minimumItemSize.height.
*/
@property NSUInteger maximumNumberOfRows;

/* The largest number of item columns to attempt to fit in the CollectionView's visible area (if enclosed in a ScrollView).  Defaults to 0, which is interpreted to mean there should be no limit other than minimumItemSize.width.
*/
@property NSUInteger maximumNumberOfColumns;


#pragma mark *** Item Size Limits ***

/* The smallest allowed dimensions for an item's root view.  Defaults to NSZeroSize, which makes the layout attempt to infer minimum dimensions from the provided itemPrototype's view's frame size.
*/
@property NSSize minimumItemSize;

/* The largest allowed dimensions for an item's root view.  Defaults to NSZeroSize, which makes the layout attempt to infer maximum dimensions from the provided itemPrototype's view's frame size.
*/
@property NSSize maximumItemSize;


#pragma mark *** Background Appearance ***

/* The colors with which to fill the background.  Defaults to nil.  Setting this to nil causes a default background color to be used.  Setting it to an empty array causes the CollectionView to draw no background fill.  Setting it to a single-NSColor array causes the entire CollectionView to be drawn with the given background fill color.  For CollectionViews using the old, pre-10.11 API: Setting it to an array of (N >= 2) colors causes the CollectionView to use them in sequence, applying color (index % N) behind the item at "index???.  For new, 10.11-and-later NSCollectionViews, colors after the first are ignored.
*/
@property (null_resettable, copy) NSArray<NSColor *> *backgroundColors;

@end

NS_ASSUME_NONNULL_END
