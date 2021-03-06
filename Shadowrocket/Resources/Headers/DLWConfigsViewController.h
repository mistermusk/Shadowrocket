//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DLWViewController.h"

#import "UIDocumentMenuDelegate-Protocol.h"
#import "UIDocumentPickerDelegate-Protocol.h"
#import "UIViewControllerPreviewingDelegate-Protocol.h"

@class NSObject, NSString, REBoolItem, RERadioItem;
@protocol OS_dispatch_source;

@interface DLWConfigsViewController : DLWViewController <UIDocumentMenuDelegate, UIDocumentPickerDelegate, UIViewControllerPreviewingDelegate>
{
    _Bool _viewDidAppeared;
    REBoolItem *_boolItem;
    RERadioItem *_typeRadioItem;
    NSObject<OS_dispatch_source> *_timer;
}

@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) RERadioItem *typeRadioItem; // @synthesize typeRadioItem=_typeRadioItem;
@property(retain, nonatomic) REBoolItem *boolItem; // @synthesize boolItem=_boolItem;
@property(nonatomic) _Bool viewDidAppeared; // @synthesize viewDidAppeared=_viewDidAppeared;
- (void).cxx_destruct;
- (id)tabImageName;
- (id)tabTitle;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)documentMenu:(id)arg1 didPickDocumentPicker:(id)arg2;
- (void)documentPicker:(id)arg1 didPickDocumentAtURL:(id)arg2;
- (void)tableView:(id)arg1 willLoadCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)configDidSyncedNotification:(id)arg1;
- (void)surgeWillDownloadNotification:(id)arg1;
- (void)surgeDidDeleteNotification:(id)arg1;
- (void)surgeDidSaveNotification:(id)arg1;
- (void)configFileDidChangeNotification:(id)arg1;
- (void)configFileDidDeleteNotification:(id)arg1;
- (void)configFileDidAddNotification:(id)arg1;
- (void)saveConfigWithURL:(id)arg1 name:(id)arg2 data:(id)arg3;
- (void)handleLongPressGestureRecognizer:(id)arg1;
- (void)showExportViewControllerWithModel:(id)arg1;
- (void)showRenameViewControllerWithModel:(id)arg1;
- (void)showDocumentPickerControllerWithSourceView:(id)arg1;
- (void)showConfigSelectionController:(id)arg1;
- (void)showTestAlertController;
- (void)showRestoreController;
- (void)dlw_addButtonTouched;
- (void)dlw_qrCodeScaned:(id)arg1;
- (void)reloadConfigsSection;
- (void)setupAddButtonItem;
- (void)setupConfigsSection;
- (id)remoteTableViewSection;
- (id)localTableViewSection;
- (id)tableViewItemWithModel:(id)arg1;
- (void)setupTableViewManager;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

