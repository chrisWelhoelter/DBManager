//
//  DBManager.h
//  FailedBanks
//
//  Created by Chris Welhoelter on 2/24/15.
//  Copyright (c) 2015 Chris Welhoelter. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DBManager : NSObject

-(instancetype)initWithDatabaseFilename:(NSString *)dbFilename;

@property (nonatomic, strong) NSMutableArray *arrColumnNames;

@property (nonatomic) int affectedRows;

@property (nonatomic) long long lastInsertedRowID;

-(NSArray *)loadDataFromDB:(NSString *)query;

-(void)executeQuery:(NSString *)query;

@end
