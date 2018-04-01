//
//  AWARESensorManager.h
//  AWARE
//
//  Created by Yuuki Nishiyama on 11/19/15.
//  Copyright © 2015 Yuuki NISHIYAMA. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <SVProgressHUD/SVProgressHUD.h>
#import <AudioToolbox/AudioServices.h>

#import "AWARESensor.h"
#import "AWAREStudy.h"

@interface AWARESensorManager : NSObject <UIAlertViewDelegate>

/** Initializer */
- (instancetype)initWithAWAREStudy:(AWAREStudy *) study;

- (void) syncAllSensors;
- (void) syncAllSensorsForcefully;
- (void) setSensorEventCallbackToAllSensors:(SensorEventCallBack)callback;
- (void) setSyncProcessCallbackToAllSensorStorages:(SyncProcessCallBack)callback;
- (void) setDebugToAllSensors:(bool)state;
- (void) setDebugToAllStorage:(bool)state;

// lock and unlock the sensor manager
- (void) lock;
- (void) unlock;
- (BOOL) isLocked;

// add a new sensor
- (void) addSensor:(AWARESensor *) sensor;
- (void) addSensors:(NSArray *)sensors;

- (BOOL) addSensorsWithStudy:(AWAREStudy *) study;
- (BOOL) addSensorsWithStudy:(AWAREStudy *) study dbType:(AwareDBType)dbType;

- (BOOL) isExist :(NSString *) key;


- (BOOL) startAllSensors;
- (BOOL) createDBTablesOnAwareServer;
- (void) stopAndRemoveAllSensors;
- (void) stopASensor:(NSString *) sensorName;
- (void) quitAllSensor;

- (void) runBatteryStateChangeEvents;

- (void) startUploadTimerWithInterval:(double) interval;
- (void) stopUploadTimer;

// get latest sensor data with sensor name
- (NSString *) getLatestSensorValue:(NSString *)sensorName;
- (NSDictionary *) getLatestSensorData:(NSString *) sensorName;
- (NSArray *) getAllSensors;

- (void) resetAllMarkerPositionsInDB;
- (void) removeAllFilesFromDocumentRoot;

@end
