// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Support Cases Private API (supportcases/v2)
// Description:
//   Support Cases API
// Documentation:
//   https://sites.google.com/a/google.com/cases/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRService.h"
#else
  #import "GTLRService.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Authorization scopes

/**
 *  Authorization scope: View and manage your Google Support Cases
 *
 *  Value "https://www.googleapis.com/auth/cases"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeSupportcasesCases;
/**
 *  Authorization scope: View your Google Support Cases
 *
 *  Value "https://www.googleapis.com/auth/cases.readonly"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeSupportcasesCasesReadonly;
/**
 *  Authorization scope: View and manage your support data
 *
 *  Value "https://www.googleapis.com/auth/supportcontent"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeSupportcasesSupportcontent;

// ----------------------------------------------------------------------------
//   GTLRSupportcasesService
//

/**
 *  Service for executing Google Support Cases Private API queries.
 *
 *  Support Cases API
 */
@interface GTLRSupportcasesService : GTLRService

// No new methods

// Clients should create a standard query with any of the class methods in
// GTLRSupportcasesQuery.h. The query can the be sent with GTLRService's execute
// methods,
//
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                     completionHandler:(void (^)(GTLRServiceTicket *ticket,
//                                                 id object, NSError *error))handler;
// or
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                              delegate:(id)delegate
//                     didFinishSelector:(SEL)finishedSelector;
//
// where finishedSelector has a signature of:
//
//   - (void)serviceTicket:(GTLRServiceTicket *)ticket
//      finishedWithObject:(id)object
//                   error:(NSError *)error;
//
// The object passed to the completion handler or delegate method
// is a subclass of GTLRObject, determined by the query method executed.

@end

NS_ASSUME_NONNULL_END
