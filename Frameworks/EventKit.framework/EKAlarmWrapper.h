/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKAlarmWrapper : NSObject  {
    struct CalAlarmOccurrence { } *_alarm;
}

+ (id)wrapperWithAlarmOccurrence:(struct CalAlarmOccurrence { }*)arg1;

- (id)occurrence;
- (id)initWithAlarmOccurrence:(struct CalAlarmOccurrence { }*)arg1;
- (double)fireDate;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (void)dealloc;

@end