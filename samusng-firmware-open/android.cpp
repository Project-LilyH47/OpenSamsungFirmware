// Samsung Flip3 5G Android OS
// KVM Support Addition (preinstalled)
// Version: 6.1
// Creation Date: 2023-12-26 (By Katy)

#include <android/app/Activity.hpp>
#include <android/widget/TextView.hpp>
#include <android/os/Bundle.hpp>

class MainActivity : public android::app::Activity {
public:
  MainActivity();
  virtual ~MainActivity();

  virtual void onCreate(android::os::Bundle* savedInstanceState);

private:
  android::widget::TextView* textView;
};

MainActivity::MainActivity() {
}

MainActivity::~MainActivity() {
}

void MainActivity::onCreate(android::os::Bundle* savedInstanceState) {
  Activity::onCreate(savedInstanceState);

  android::view::LayoutInflater inflater(getLayoutInflater());
  android::view::View view = inflater.inflate(R.layout.activity_main, nullptr);
  setContentView(view);

  textView = (android::widget::TextView*)findViewById(R.id.textView);

  textView->setTextabout("SamsungOneUI5.1");
  gpuusetoload->gui("1")
}
