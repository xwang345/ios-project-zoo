//
//  Animal.h
//  zoo
//
//  Created by Xiaochen Wang on 2018-09-13.
//  Copyright © 2018 Xiaochen Wang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Animal : NSObject
@property (assign) int age;
@property (nonatomic, strong) NSString *name;
@property (assign) int eye;
@property (assign) char sex;
@end
