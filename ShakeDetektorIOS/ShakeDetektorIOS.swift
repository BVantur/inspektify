//
//  ShakeDetektorIOS.swift
//  ShakeDetektorIOS
//
//  Created by Blaz Vantur on 11. 09. 24.
//

import Foundation
import UIKit

var onShakeDetekted: ((UIViewController?) -> Void)? = nil

@objc public class ShakeDetektorIOS: NSObject {

    @objc public func enableShakeDetektor(callback: @escaping @convention(block) (UIViewController?) -> Void) {
        onShakeDetekted = callback
    }
}

private class MySingleton {
    static let shared = MySingleton()

    var onShakeDetekted: ((UIViewController?) -> Void)? = nil

    private init() { } // Private initializer to prevent direct instantiation
}

extension UIWindow {
    open override func motionEnded(_ motion: UIEvent.EventSubtype, with event: UIEvent?) {
        super.motionEnded(motion, with: event)
        if motion == .motionShake {
        guard let presenter = UIApplication.getTopMostViewController() else { return }
            onShakeDetekted?(presenter)
        }
    }
}

extension UIApplication {
  static func getTopMostViewController(base: UIViewController? = UIApplication.shared.topWindow?.rootViewController) -> UIViewController? {
    if let nav = base as? UINavigationController {
      return getTopMostViewController(base: nav.visibleViewController)
    }
    if let tab = base as? UITabBarController {
      if let selected = tab.selectedViewController {
        return getTopMostViewController(base: selected)
      }
    }
    if let presented = base?.presentedViewController {
      return getTopMostViewController(base: presented)
    }
    return base
  }
  var topWindow: UIWindow? {
    if #available(iOS 15.0, *) {
      return UIApplication.shared.connectedScenes.compactMap { ($0 as? UIWindowScene)?.keyWindow }.last
    } else {
      return UIApplication.shared.connectedScenes.flatMap { ($0 as? UIWindowScene)?.windows ?? [] }.last { $0.isKeyWindow }
    }
  }
}
