//
//  IZReader.h
//  iZettle
//
//  Created by Alexander Nordfelth on 2010-06-16.
//  Copyright 2010 iZettle AB. All rights reserved.
//

#if 0
#import <Foundation/Foundation.h>


extern NSString *const IZReaderDidConnectNotification;
extern NSString *const IZReaderDidDisconnectNotification;
extern NSString *const IZCardDidInsertNotification;
extern NSString *const IZCardDidRemoveNotification;


@class CardReaderRequest, CardReaderResponse;

@interface IZReader : NSObject<NSStreamDelegate> {
}

+ (IZReader*)sharedReader;

@property(nonatomic, readonly) BOOL isRunning;
@property(nonatomic, readonly) BOOL hasReader; //KVO
@property(nonatomic, readonly) BOOL hasCard;  //KVO
@property(nonatomic, readonly) NSString *identifier;

- (void)addCommandToQueue:(CardReaderRequest *)command completion:(void (^)(CardReaderResponse *data))completion;

- (void)startScanningForCard;
- (void)stopScanningForCard;



@end

#endif
