#include "ctxt.h"
#include "install.h"

struct install_item insthier[] = {
  {INST_MKDIR, 0, 0, ctxt_bindir, 0, 0, 0755},
  {INST_MKDIR, 0, 0, ctxt_incdir, 0, 0, 0755},
  {INST_MKDIR, 0, 0, ctxt_dlibdir, 0, 0, 0755},
  {INST_MKDIR, 0, 0, ctxt_slibdir, 0, 0, 0755},
  {INST_MKDIR, 0, 0, ctxt_repos, 0, 0, 0755},
  {INST_COPY, "lua-ada-conf.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "lua-ext.c", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "lua-check_raise.ads", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "lua-check_raise.ads", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "lua-config.ads", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "lua-config.ads", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "lua-lib.ads", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "lua-lib.ads", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "lua-user_data.ads", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "lua-user_data.ads", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "lua.ads", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "lua.ads", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "lua-check_raise.adb", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "lua-check_raise.adb", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "lua-lib.adb", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "lua-lib.adb", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "lua-user_data.adb", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "lua-user_data.adb", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "lua.adb", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "lua.adb", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "lua_check_exception.adb", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "lua_check_exception.adb", 0, ctxt_incdir, 0, 0, 0644},
  {INST_COPY, "lua-check_raise.ali", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "lua-check_raise.ali", 0, ctxt_incdir, 0, 0, 0444},
  {INST_COPY, "lua-config.ali", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "lua-config.ali", 0, ctxt_incdir, 0, 0, 0444},
  {INST_COPY, "lua-lib.ali", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "lua-lib.ali", 0, ctxt_incdir, 0, 0, 0444},
  {INST_COPY, "lua-user_data.ali", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "lua-user_data.ali", 0, ctxt_incdir, 0, 0, 0444},
  {INST_COPY, "lua.ali", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "lua.ali", 0, ctxt_incdir, 0, 0, 0444},
  {INST_COPY, "lua_check_exception.ali", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "lua_check_exception.ali", 0, ctxt_incdir, 0, 0, 0444},
  {INST_COPY, "lua-ada.sld", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY, "lua-ada.a", "liblua-ada.a", ctxt_slibdir, 0, 0, 0644},
  {INST_COPY, "lua-ada-conf.ld", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY_EXEC, "lua-ada-conf", 0, ctxt_bindir, 0, 0, 0755},
  {INST_COPY, "lua-check-exception.ald", 0, ctxt_repos, 0, 0, 0644},
  {INST_COPY_EXEC, "lua-check-exception", 0, ctxt_bindir, 0, 0, 0755},
};
unsigned long insthier_len = sizeof(insthier) / sizeof(struct install_item);
