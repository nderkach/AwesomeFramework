//
//  AWEMainClass.h
//  AwesomeFramework
//
//  Created by Nikolay Derkach on 7/16/18.
//  Copyright © 2018 Nikolay Derkach. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AWEMainClass : NSObject

+ (NSData * _Nullable)encrypt:(NSString *)message error:(NSError **)error;

@end
