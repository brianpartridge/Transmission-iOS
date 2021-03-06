//
//  BPTorrentCell.h
//  Transmission-iOS
//
//  Created by Brian Partridge on 3/2/13.
//  Copyright (c) 2013 Brian Partridge. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BPTorrent.h"
#import "BPProgressView.h"

typedef NS_ENUM(NSInteger, BPTorrentCellStyle) {
    BPTorrentCellStyleStats,
    BPTorrentCellStyleAge,
};

@protocol BPTorrentCellDelegate;

@interface BPTorrentCell : UITableViewCell

@property (nonatomic, assign) BPTorrentCellStyle style;
@property (strong, nonatomic) IBOutlet UILabel *nameLabel;
@property (strong, nonatomic) IBOutlet UILabel *subtitleLabel;
@property (strong, nonatomic) IBOutlet UIButton *actionButton;
@property (strong, nonatomic) IBOutlet BPProgressView *progressView;
@property (nonatomic, weak) id<BPTorrentCellDelegate> delegate;

- (IBAction)actionTapped:(id)sender;

- (void)updateForTorrent:(BPTorrent *)torrent;

@end

@protocol BPTorrentCellDelegate <NSObject>

@optional
- (void)torrentCellDidTapActionButton:(BPTorrentCell *)cell;

@end