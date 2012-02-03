//
//  MainViewController.h
//  RIISKata
//
//  Created by Brad Dunlap on 12/19/11.
//  Copyright (c) 2011 RIIS. All rights reserved.
//

#import "SettingsViewController.h"

@interface MainViewController : UIViewController <SettingsViewControllerDelegate> {
    UIButton *groundButton_;
}

@property (nonatomic, retain) IBOutlet UIButton *groundButton;

- (IBAction)showInfo:(id)sender;
- (IBAction)ground:(id)sender;

@end
