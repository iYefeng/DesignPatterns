
add_executable(adapter_oo_test adapter_oo_test.cc Target.cc Adaptee.cc AdapterOO.cc)
target_link_libraries(adapter_oo_test)

add_executable(adapter_ob_test adapter_ob_test.cc Target.cc Adaptee.cc AdapterOB.cc)
target_link_libraries(adapter_ob_test)
