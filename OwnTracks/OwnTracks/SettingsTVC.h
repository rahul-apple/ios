//
//  SettingsTVC.h
//  OwnTracks
//
//  Created by Christoph Krey on 11.09.13.
//  Copyright © 2013-2018 Christoph Krey. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ABStaticTableViewController.h"
#import "QRCodeReaderViewController.h"

@interface SettingsTVC : ABStaticTableViewController <UIDocumentInteractionControllerDelegate, UITextFieldDelegate, QRCodeReaderDelegate>
@property (nonatomic) BOOL privileged;
@end
