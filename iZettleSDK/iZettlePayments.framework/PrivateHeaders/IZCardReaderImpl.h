//
//  Reader.h
//  iZettle
//
//  Created by Måns Bernhardt on 2012-08-07.
//  Copyright (c) 2012 iZettle. All rights reserved.
//

@import Foundation;
#import "IZCardReader.h"



@interface IZCardReader (Protected)

//protected, only for subclasses and CardReaderManager internals


- (IZFuture *)connect;

- (void)switchToNetworkContext:(IZReaderNetworkContext *)context;
@property (readonly) IZReaderNetworkContext *networkContext;

- (void)disconnect;

// called for unsolicited events
- (void)updateCardStatusForInterface:(CardInterface)interface data:(NSData *)cardData error:(NSError *)error;
- (void)clearCardStatus;
- (void)updateBatteryStatus:(IZBatteryStatus)batteryStatus;
- (void)updatePinEntryState:(PinEntryState)entryState;
- (void)updatePinEntryDigitCount:(NSInteger)digitCount;

@end



