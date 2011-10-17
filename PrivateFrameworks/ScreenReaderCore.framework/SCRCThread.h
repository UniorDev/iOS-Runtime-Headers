/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@class NSThread, SCRCStackQueue, NSString;

@interface SCRCThread : NSObject  {
    SCRCStackQueue *_queue;
    id _queueLock;
    struct __CFRunLoopSource { } *_source;
    struct __CFRunLoop { } *_runLoop;
    id _key;
    BOOL _isInvalid;
    BOOL _isRegistered;
    BOOL _isTimerSet;
    double _lastStartTime;
    NSString *_description;
    BOOL _descriptionChanged;
    NSThread *_nsThread;
}

+ (int)activeThreadCount;
+ (double)lastStartTimeForKey:(id)arg1;
+ (void)invalidateForKey:(id)arg1;
+ (void)postStopNotification;
+ (double)_performSelector:(SEL)arg1 withThreadKey:(id)arg2 onTarget:(id)arg3 waitTime:(double)arg4 cancelMask:(unsigned long)arg5 count:(unsigned long)arg6 firstObject:(id)arg7 moreObjects:(void*)arg8;
+ (void)initialize;
+ (id)activity;

- (void)_processQueue;
- (void)_setName:(id)arg1;
- (double)performSelector:(SEL)arg1 onTarget:(id)arg2 cancelMask:(unsigned long)arg3 count:(unsigned long)arg4 objects:(id)arg5;
- (id)_initWithKey:(id)arg1 task:(id)arg2;
- (void)_enqueueTask:(id)arg1 cancelMask:(unsigned long)arg2 lastStartTime:(double*)arg3;
- (double)lastStartTime;
- (void)setIsInvalid:(BOOL)arg1;
- (void)_runThread:(id)arg1;
- (double)performSelector:(SEL)arg1 onTarget:(id)arg2 count:(unsigned long)arg3 objects:(id)arg4;
- (BOOL)isInvalid;
- (double)_performSelector:(SEL)arg1 onTarget:(id)arg2 cancelMask:(unsigned long)arg3 count:(unsigned long)arg4 firstObject:(id)arg5 moreObjects:(void*)arg6;
- (void)_processQueueFromTimer;
- (void)_setKey:(id)arg1;
- (void)setName:(id)arg1;
- (id)init;
- (void)dealloc;

@end