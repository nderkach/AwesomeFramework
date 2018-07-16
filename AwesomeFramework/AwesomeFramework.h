//
//  AwesomeFramework.h
//  AwesomeFramework
//
//  Created by Nikolay Derkach on 7/16/18.
//  Copyright © 2018 Nikolay Derkach. All rights reserved.
//

#if __has_feature(modules)
@import Foundation;
#else
#import <Foundation/Foundation.h>
#endif

//! Project version number for AwesomeFramework.
FOUNDATION_EXPORT double AwesomeFrameworkVersionNumber;

//! Project version string for AwesomeFramework.
FOUNDATION_EXPORT const unsigned char AwesomeFrameworkVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <AwesomeFramework/PublicHeader.h>

#include "AWEMainClass.h"
