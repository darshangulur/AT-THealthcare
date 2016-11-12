//
//  DetailViewController.h
//  AT&THealthcare
//
//  Created by Darshan Gulur Srinivasa on 11/12/16.
//  Copyright © 2016 AT&T. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) NSDate *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

