/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface _CATProxyWaitToken : NSObject {
    BOOL  _isExclusive;
    id  _resourceProxy;
    bool  mFinished;
    NSObject<OS_dispatch_group> * mGroup;
}

@property (nonatomic, readonly) BOOL isExclusive;
@property (nonatomic, readonly) id resourceProxy;

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (id)initWithExclusive:(BOOL)arg1 group:(id)arg2;
- (void)invalidate;
- (BOOL)isExclusive;
- (void)notifyWithResourceProxy:(id)arg1;
- (id)resourceProxy;

@end
