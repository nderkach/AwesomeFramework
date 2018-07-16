//
//  AWEConstants.h
//  AwesomeFramework
//
//  Created by Nikolay Derkach on 7/16/18.
//  Copyright © 2018 Nikolay Derkach. All rights reserved.
//

#import <Foundation/Foundation.h>

/** An error domain identifying AwesomeFramework-specific errors. */
extern NSString * const AWEErrorDomain;

@interface AWEConstants : NSObject

typedef NS_ENUM(NSInteger, AWEError) {
	/** General error (please don't abuse it :). */
	AWEErrorFail = 1
};

@end
