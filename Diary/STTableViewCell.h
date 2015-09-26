//
//  STTableViewCell.h
//  Diary
//
//  Created by Sathish Chinniah on 12/09/15.
//  Copyright (c) 2015 Sathish Chinniah. All rights reserved.
//

#import <UIKit/UIKit.h>

@class STDiaryEntry;

@interface STTableViewCell : UITableViewCell

+ (CGFloat)heightForEntry:(STDiaryEntry *)entry;
- (void)configureCellForEntry:(STDiaryEntry *)entry;

@end
