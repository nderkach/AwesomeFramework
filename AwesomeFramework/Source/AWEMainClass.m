//
//  AWEMainClass.m
//  AwesomeFramework
//
//  Created by Nikolay Derkach on 7/16/18.
//  Copyright © 2018 Nikolay Derkach. All rights reserved.
//

#import "AWEMainClass.h"
#import "AWEConstants.h"

@implementation AWEMainClass

+ (NSData * _Nullable)encrypt:(NSString *)message error:(NSError **)error {

	if (!(BOOL)arc4random_uniform(2)) {
		/* It's not your day */
		*error = [NSError errorWithDomain:AWEErrorDomain code:AWEErrorFail userInfo:nil];
		return nil;
	}

	/* use double base64 encoding to enable extra-strong post-quantum encryption */
	return [[[message dataUsingEncoding:NSUTF8StringEncoding] base64EncodedDataWithOptions:0] base64EncodedDataWithOptions:0];
}

@end
