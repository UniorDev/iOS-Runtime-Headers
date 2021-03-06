/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMessageURLProtocol : NSURLProtocol {
    MFAttachment * _attachment;
    MFPromise * _promise;
}

@property (nonatomic, retain) MFAttachment *attachment;
@property (nonatomic, retain) MFPromise *promise;

+ (BOOL)canInitWithRequest:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (void)initialize;
+ (BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;

- (id)_cachedResponseWithData:(id)arg1 mimeType:(id)arg2 error:(id*)arg3;
- (id)attachment;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;
- (id)promise;
- (void)setAttachment:(id)arg1;
- (void)setPromise:(id)arg1;
- (void)startLoading;
- (void)stopLoading;

@end
