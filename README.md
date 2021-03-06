# Transmission-iOS

## Description

A [Transmission](http://www.transmissionbt.com) client for iOS.

Designed for a single purpose: quick management of BitTorrent transfers within your home network.  No network configuration is required, it will automatically connect to the first available Transmission instance on the same network.

- View current transfer stats.
- Pause and resume transfers.
- Swipe to remove transfers.
- Tap cell to toggle display of transfer age.

![Transfer List](Screenshots/transfers.png)

## Usage

### Prerequisites
- To manage transfers, you must enable remote access to your Transmission desktop client:
  - Transmission > Preferences > Remote
  - Enable Remote Access: YES
  - Display the web interface with Bonjour: YES
  - Require authentication: Optional

### Building
- Load cocoapod dependencies

        pod install

- Build and run the project using Xcode.

## Dependencies

- AFNetworking
- AFHTTPRequestOperationLogger
- BPFoundation
- MagicalRecord
- PTLURLProtocol
- SVProgressHUD
- TTTFormatterKit

## License

MIT - See LICENSE.txt

## Thanks

The Transmission dev team for years of great work.

[Entertica](http://www.entertica.com) for posting such a great [icon](http://entertica.tumblr.com/post/204376537/transmission-for-brurry) to their blog.

## Contact

[Brian Partridge](http://brianpartridge.name) - @brianpartridge on [Twitter](http://twitter.com/brianpartridge) and [App.Net](http://alpha.app.net/brianpartridge)