%% ToF camera dump script

function [xall, yall, zall] = tof_dump(filename, iterations)

    [dev] = sr_open(); % open the connection

    xall = [];
    yall = [];
    zall = [];
    
    tic;
    for i = 0:iterations; % the main loop

        sr_acquire(dev); % start the acquiring process
        
        [res, x, y, z] = sr_coordtrf(dev);

        %stor the coordinates in the overall array
        xall = [xall; x];
        yall = [yall; y];
        zall = [zall; z];

    end
    sr_close(dev);
    toc
    
    temp = [xall; yall; zall];

    csvwrite(filename, temp );
    
    
    
end
