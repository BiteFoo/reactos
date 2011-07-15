<?xml version="1.0"?>
<!DOCTYPE module SYSTEM "../../../../tools/rbuild/project.dtd">
<module name="uniata" type="kernelmodedriver" installbase="system32/drivers" installname="uniata.sys">
	<bootstrap installbase="$(CDOUTPUT)/system32/drivers" />
	<include base="uniata">.</include>
	<include base="uniata">inc</include>
	<group compilerset="gcc">
		<compilerflag compiler="cxx">-fno-exceptions</compilerflag>
		<compilerflag compiler="cxx">-fno-rtti</compilerflag>
	</group>
	<!-- define name="_DEBUG" /-->
	<library>ntoskrnl</library>
	<library>hal</library>
	<library>scsiport</library>
	<file>id_ata.cpp</file>
	<file>id_badblock.cpp</file>
	<file>id_dma.cpp</file>
	<file>id_init.cpp</file>
	<file>id_probe.cpp</file>
	<file>id_queue.cpp</file>
	<file>id_sata.cpp</file>
	<file>idedma.rc</file>

	<directory name="ros_glue">
		<file>ros_glue.cpp</file>
	</directory>
</module>
