//
//  IZAccessoryService+EAAccessory.h
//  iZettlePayments
//
//  Created by Andrei Valkovskii on 2018-06-14.
//  Copyright © 2018 iZettle. All rights reserved.
//

#import "IZAccessoryService.h"

@interface IZAccessoryService (EAAccessory)

- (instancetype)initWithAccessory:(EAAccessory *)accessory protocol:(NSString *)protocol error:(NSError **)error;

- (void)didDisconnectAccessory:(EAAccessory *)accessory;
- (void)didConnectAccessory:(EAAccessory *)accessory;

@end
