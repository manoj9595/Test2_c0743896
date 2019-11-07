//
//  ViewController.swift
//  Test2_c0743896
//
//  Created by Manoj kumar on 2019-11-07.
//  Copyright © 2019 manoj. All rights reserved.
//

import UIKit
import Particle_SDK



class ViewController: UIViewController {
   // MARK: User variables
   let USERNAME = "manoj.bobby796@gmail.com"
   let PASSWORD = "xevmyb-rigbew-hinZo3"
   
   // MARK: Device
   let DEVICE_ID = "2e0048001047363333343437"
   var myPhoton : ParticleDevice?
   
   var seconds:Int = 0
   var timer:Timer?
    
    @IBOutlet weak var sliderLabel: UISlider!
    @IBOutlet weak var timerLabel: UILabel!
    
    @IBAction func StartMonitorButton(_ sender: Any) {
        
        
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
    }


}

