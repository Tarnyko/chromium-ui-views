// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "ui/views/controls/menu/menu_config.h"

namespace views {

void MenuConfig::Init() {
  // Desktop Linux uses the config provided by data member initializers.
  // Note this causes --open-ash on Linux to use the Desktop Linux style as
  // well.
}

}  // namespace views
