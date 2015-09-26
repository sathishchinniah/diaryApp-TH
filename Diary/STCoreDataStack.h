//
//  STCoreDataStack.h
//  Diary
//
//  Created by Sathish Chinniah on 12/09/15.
//  Copyright (c) 2015 Sathish Chinniah. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface STCoreDataStack : NSObject

+(instancetype)defaultStack;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
