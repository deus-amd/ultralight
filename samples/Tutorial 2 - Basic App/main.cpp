#include <AppCore/App.h>
#include <AppCore/Window.h>
#include <AppCore/Overlay.h>

using namespace ultralight;

#define WIDTH 300
#define HEIGHT 300

int main() {
  ///
  /// Create our main App instance.
  ///
  auto app = App::Create();
  
  ///
  /// Create our Window using default window flags.
  ///
  auto window = Window::Create(app->main_monitor(), WIDTH, HEIGHT, false, 0);

  ///
  /// Set our window title.
  ///
  window->SetTitle("Hello!");

  ///
  /// Bind our App's main window.
  ///
  /// @note This MUST be done before creating any overlays or calling App::Run
  ///
  app->set_window(window);

  ///
  /// Create our Overlay, use the same dimensions as our Window.
  ///
  auto overlay = Overlay::Create(window, WIDTH, HEIGHT, 0, 0);

  ///
  /// Load a string of HTML into our overlay's View
  ///
  overlay->view()->LoadHTML("<center>Hello World!</center>");

  ///
  /// Run our main loop.
  ///
  app->Run();

  return 0;
}
