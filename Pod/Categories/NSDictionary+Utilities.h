//
//  NSDictionary+Utilities.h
//  MirrorKit
//
//  Created by Tanner on 7/5/15.
//  Copyright (c) 2015 Tanner Bennett. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (Utilities)

/** \c MKPropertyAttributeKeyTypeEncoding is the only required key. Keys representing a boolean value should have a value of \c @YES instead of an empty string. */
- (NSString *)propertyAttributesString;

@end
