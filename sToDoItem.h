//
//  sToDoItem.h
//  ToDoList
//
//  Created by Benjamin Selland on 3/1/14.
//  Copyright (c) 2014 Selland, Ben. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface sToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;


@end
