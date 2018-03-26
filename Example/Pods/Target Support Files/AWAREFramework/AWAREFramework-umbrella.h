#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "AWARECore.h"
#import "AWARECoreDataManager.h"
#import "AWAREDataUploader.h"
#import "AWAREDebugMessageLogger.h"
#import "AWAREDelegate.h"
#import "AWAREKeys.h"
#import "AWAREPlugin.h"
#import "AWARESensor.h"
#import "AWARESensorManager.h"
#import "AWARESensors.h"
#import "AWAREStudy.h"
#import "AWAREUploader.h"
#import "AWAREUtils.h"
#import "DBTableCreator.h"
#import "LocalFileStorageHelper.h"
#import "Reachability.h"
#import "SQLiteSyncExecutor.h"
#import "SSLManager.h"
#import "TCQMaker.h"
#import "ESM.h"
#import "EntityESM+CoreDataClass.h"
#import "EntityESM+CoreDataProperties.h"
#import "EntityESMAnswer+CoreDataProperties.h"
#import "EntityESMAnswer.h"
#import "EntityESMHistory+CoreDataProperties.h"
#import "EntityESMHistory.h"
#import "EntityESMSchedule+CoreDataProperties.h"
#import "EntityESMSchedule.h"
#import "BaseESMView.h"
#import "ESMAudioView.h"
#import "ESMCheckBoxView.h"
#import "ESMClockLineView.h"
#import "ESMClockTimePickerView.h"
#import "ESMDateTimePickerView.h"
#import "ESMLikertScaleView.h"
#import "ESMNumberView.h"
#import "ESMPAMView.h"
#import "ESMPictureView.h"
#import "ESMQuickAnswerView.h"
#import "ESMRadioView.h"
#import "ESMScaleView.h"
#import "ESMFreeTextView.h"
#import "ESMVideoView.h"
#import "ESMWebView.h"
#import "IOSESMScrollViewController.h"
#import "PamSchema.h"
#import "AWAREMqtt.h"
#import "BasicSettings.h"
#import "BLEHeartRate.h"
#import "EntityBLEHeartRate+CoreDataProperties.h"
#import "EntityBLEHeartRate.h"
#import "EntityCalendar+CoreDataClass.h"
#import "EntityCalendar+CoreDataProperties.h"
#import "Contacts.h"
#import "EntityContact+CoreDataClass.h"
#import "EntityContact+CoreDataProperties.h"
#import "DeviceUsage.h"
#import "EntityDeviceUsage+CoreDataProperties.h"
#import "EntityDeviceUsage.h"
#import "EntityFitbitData+CoreDataClass.h"
#import "EntityFitbitData+CoreDataProperties.h"
#import "EntityFitbitDevice+CoreDataClass.h"
#import "EntityFitbitDevice+CoreDataProperties.h"
#import "Fitbit.h"
#import "FitbitData.h"
#import "FitbitDevice.h"
#import "EntityLocationVisit+CoreDataProperties.h"
#import "EntityLocationVisit.h"
#import "FusedLocations.h"
#import "CalEvent.h"
#import "GoogleCalPull.h"
#import "GoogleCalPush.h"
#import "GoogleLogin.h"
#import "AWAREHealthKit.h"
#import "AWAREHealthKitCategory.h"
#import "AWAREHealthKitQuantity.h"
#import "AWAREHealthKitWorkout.h"
#import "EntityIOSActivityRecognition+CoreDataClass.h"
#import "EntityIOSActivityRecognition+CoreDataProperties.h"
#import "IOSActivityRecognition.h"
#import "IOSESM.h"
#import "EntityLabel+CoreDataProperties.h"
#import "EntityLabel.h"
#import "Labels.h"
#import "EntityMemory+CoreDataProperties.h"
#import "EntityMemory.h"
#import "Memory.h"
#import "EntityNTPTime+CoreDataProperties.h"
#import "EntityNTPTime.h"
#import "NTPTime.h"
#import "Observer.h"
#import "EntityOpenWeather+CoreDataProperties.h"
#import "EntityOpenWeather.h"
#import "OpenWeather.h"
#import "EntityPushNotification+CoreDataProperties.h"
#import "EntityPushNotification.h"
#import "PushNotification.h"
#import "SensorTag.h"
#import "Accelerometer.h"
#import "EntityAccelerometer+CoreDataProperties.h"
#import "EntityAccelerometer.h"
#import "Barometer.h"
#import "EntityBarometer+CoreDataProperties.h"
#import "EntityBarometer.h"
#import "Battery.h"
#import "BatteryCharge.h"
#import "BatteryDischarge.h"
#import "EntityBattery+CoreDataProperties.h"
#import "EntityBattery.h"
#import "EntityBatteryCharge+CoreDataProperties.h"
#import "EntityBatteryCharge.h"
#import "EntityBatteryDischarge+CoreDataProperties.h"
#import "EntityBatteryDischarge.h"
#import "Bluetooth.h"
#import "EntityBluetooth+CoreDataProperties.h"
#import "EntityBluetooth.h"
#import "Calls.h"
#import "EntityCall+CoreDataProperties.h"
#import "EntityCall.h"
#import "Debug.h"
#import "EntityDebug+CoreDataProperties.h"
#import "EntityDebug.h"
#import "EntityGravity+CoreDataProperties.h"
#import "EntityGravity.h"
#import "Gravity.h"
#import "EntityGyroscope+CoreDataProperties.h"
#import "EntityGyroscope.h"
#import "Gyroscope.h"
#import "EntityLinearAccelerometer+CoreDataProperties.h"
#import "EntityLinearAccelerometer.h"
#import "LinearAccelerometer.h"
#import "EntityLocation+CoreDataProperties.h"
#import "EntityLocation.h"
#import "Locations.h"
#import "VisitLocations.h"
#import "EntityMagnetometer+CoreDataProperties.h"
#import "EntityMagnetometer.h"
#import "Magnetometer.h"
#import "EntityNetwork+CoreDataProperties.h"
#import "EntityNetwork.h"
#import "Network.h"
#import "Orientation.h"
#import "Pedometer.h"
#import "EntityProcessor+CoreDataProperties.h"
#import "EntityProcessor.h"
#import "Processor.h"
#import "EntityProximity+CoreDataProperties.h"
#import "EntityProximity.h"
#import "Proximity.h"
#import "EntityRotation+CoreDataProperties.h"
#import "EntityRotation.h"
#import "Rotation.h"
#import "EntityScreen+CoreDataProperties.h"
#import "EntityScreen.h"
#import "Screen.h"
#import "EntityTimezone+CoreDataProperties.h"
#import "EntityTimezone.h"
#import "Timezone.h"
#import "EntityWifi+CoreDataProperties.h"
#import "EntityWifi.h"
#import "MobileWiFi.h"
#import "WiFiDeviceClient.h"
#import "WiFiManager.h"
#import "WiFiNetwork.h"
#import "Wifi.h"

FOUNDATION_EXPORT double AWAREFrameworkVersionNumber;
FOUNDATION_EXPORT const unsigned char AWAREFrameworkVersionString[];

