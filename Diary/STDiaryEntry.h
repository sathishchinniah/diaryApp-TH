//
//  STDiaryEntry.h
//  Diary
//
//  Created by Sathish Chinniah on 12/09/15.
//  Copyright (c) 2015 Sathish Chinniah. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

NS_ENUM(int16_t, STDiaryEntryMood){
  STDiaryEntryMoodGood = 0,
  STDiaryEntryMoodAverage = 1,
  STDiaryEntryMoodBad = 2
};

@interface STDiaryEntry : NSManagedObject

@property (nonatomic) NSTimeInterval date;
@property (nonatomic, retain) NSString * body;
@property (nonatomic, retain) NSData * imageData;
@property (nonatomic) int16_t mood;
@property (nonatomic, retain) NSString * location;
@property (nonatomic, readonly) NSString *sectionName;

@end
