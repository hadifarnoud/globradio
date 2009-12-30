//
//  FRRadioGroupController.h
//  radio3
//
//  Created by Daniel Rodríguez Troitiño on 24/05/09.
//  Copyright 2009 Daniel Rodríguez Troitiño. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FRRadioTableController.h"

@class FRTableViewItem;

@interface FRRadioGroupController : FRRadioTableController {
 @private
  FRTableViewItem *parentItem_;
  NSMutableArray *items_;
  NSTimer *timeoutTimer_;
}

@property (nonatomic, retain) FRTableViewItem *parentItem;

@end