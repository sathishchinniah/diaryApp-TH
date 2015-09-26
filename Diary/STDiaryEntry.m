//
//  STDiaryEntry.m
//  Diary
//
//  Created by Sathish Chinniah on 12/09/15.
//  Copyright (c) 2015 Sathish Chinniah. All rights reserved.
//


#import "STDiaryEntry.h"


@implementation STDiaryEntry

@dynamic date;
@dynamic body;
@dynamic imageData;
@dynamic mood;
@dynamic location;

-(NSString *)sectionName{
  NSDate *date = [NSDate dateWithTimeIntervalSince1970:self.date];
  NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
  [dateFormatter setDateFormat:@"MMM YYYY"];

  return [dateFormatter stringFromDate:date];
}

@end
