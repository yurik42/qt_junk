:
for i in ammeraal interview q_app1 q_app2 q_load_image_in_label q_load_image_in_scene qc-proj1 qt_html_renderer qt_tab_control # rasterwindow simpletreemodel
do
	echo $i
	cmake -S $i -B build-$i
	cmake --build build-$i -j4
done
