Pod::Spec.new do |s|
s.name         =  'BiometricAuthenticationFacade'
s.version      =  '1.0.0'
s.license      =  { :type => 'MIT', :file => 'LICENSE' }
s.homepage     =  'https://github.com/Visput/BiometricAuthenticationFacade'
s.authors      =  { 'Visput' => 'vvv.popko@gmail.com' }
s.summary      =  'BiometricAuthenticationFacade is a high level wrapper for LocalAuthentication framework.'

# Source Info
s.platform     =  :ios, '6.0'
s.source       =  { :git => 'https://github.com/Visput/BiometricAuthenticationFacade.git', :tag => "v#{s.version}" }
s.source_files =  "**/*.{h,m}"
s.framework    =  'LocalAuthentication, XCTest'

s.requires_arc = true

# Pod Dependencies

end