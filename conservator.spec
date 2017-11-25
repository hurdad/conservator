Name:           conservator
Version:        0.0.2
Release:        1%{?dist}
Summary:        C++ Zookeeper client library inspired by Apache Curator data.
Group:          System Environment/Libraries
License:        Apache 2.0
URL:            https://github.com/rjenkins/conservator
Source:         %{name}-master.zip
BuildRoot:      %{_tmppath}/%{name}-%{version}-%{release}-root-%(%{__id_u} -n)
BuildRequires:  check

AutoReqProv:    no

%description
Conservator is a Zookeeper Client library written in C++. It's not a direct port of Apache Curator but tries to mirror the simplicity and fluent nature of the CuratorFramework API.

%package devel
Summary:	%{name} development package
Group:		Development/Libraries
Requires:	%{name} = %{version}

%description devel
Development files for %{name}.

%prep
%setup -n %{name}-master
%build
cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=/usr
make %{?_smp_mflags}

%install
rm -rf $RPM_BUILD_ROOT
make install DESTDIR=$RPM_BUILD_ROOT

%clean
rm -rf $RPM_BUILD_ROOT

%post
ldconfig

%postun
ldconfig

%files
%defattr(-,root,root,-)
%doc LICENSE README.md
%{_libdir}/*.so*

%files devel
%defattr(-,root,root,-)
%{_includedir}

%changelog
